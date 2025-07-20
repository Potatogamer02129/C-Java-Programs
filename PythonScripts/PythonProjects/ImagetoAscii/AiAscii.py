
from ascii_magic import AsciiArt

api_key = 'sk-mnopabcd1234efghmnopabcd1234efghmnopabcd'
my_art = AsciiArt.from_dalle('A portrait of a cow with noble clothes', api_key)
my_art.to_html_file('cow_dalle.html', columns=200)
