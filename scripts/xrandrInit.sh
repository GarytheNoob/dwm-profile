#!/bin/bash

# 使用 xrandr 命令获取连接的显示器信息，并提取 eDP 和 HDMI 显示器名称 
connected_displays=$(xrandr | grep " connected" | awk '{print $1}')
hdmi_display=""
edp_display=""

# 遍历每个显示器并识别 eDP 和 HDMI 显示器
for display in $connected_displays; do
    if xrandr --query | grep -w "$display" | grep -q "eDP"; then
        edp_display="$display"
    elif xrandr --query | grep -w "$display" | grep -q "HDMI"; then
        hdmi_display="$display"
    fi
done

# 将 HDMI 显示器放置在 eDP 的右侧
if [ -n "$hdmi_display" ] && [ -n "$edp_display" ]; then
    xrandr --output "$edp_display" --off
    xrandr --output "$hdmi_display" --auto --mode 2560x1440 --rate 144
fi
