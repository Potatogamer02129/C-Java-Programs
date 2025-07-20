from ascii_magic import AsciiArt
s = input("Enter a url to a image: ")
try:
    my_art = AsciiArt.from_url(s)
except OSError as e:
    print(f'Could not load the image, server said: {e.code} {e.msg}')
my_art.to_terminal()
my_art.to_html_file('lipstick.html')
