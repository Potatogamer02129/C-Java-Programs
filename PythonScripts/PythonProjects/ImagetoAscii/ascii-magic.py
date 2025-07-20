from ascii_magic import AsciiArt
my_art = AsciiArt.from_image('/home/potatogamer/Pictures/wallpaper2.png')
my_art.to_terminal()
my_art.to_html_file('cloudsAscii.html',columns=200,width_ratio=2)
