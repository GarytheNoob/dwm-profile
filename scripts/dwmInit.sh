export LANG=zh_CN.UTF-8
export LANGUAGE=zh_CN:en_US
export LC_CTYPE=en_US.UTF-8

export GTK_IM_MODULE DEFAULT=fcitx
export QT_IM_MODULE  DEFAULT=fcitx
export XMODIFIERS    DEFAULT=\@im=fcitx

exec dwmblocks &
exec fcitx &
exec dunst &
