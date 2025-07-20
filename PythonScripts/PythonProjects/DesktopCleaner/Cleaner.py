import os
import shutil
os.makedirs('Programs',exist_ok=True)
os.makedirs('Videos',exist_ok=True)
os.makedirs('Pictures',exist_ok=True)
os.makedirs('Zip Files',exist_ok=True)
os.makedirs('Documents',exist_ok=True)
for file in os.listdir():
    if file=='Cleaner.py':
        pass
    elif file.endswith('py') or file.endswith('c') or file.endswith('java'):
        shutil.move(file,'./Programs')
    elif file.endswith('mkv') or file.endswith('mp4'):
        shutil.move(file,'./Videos')
    elif file.endswith('jpg') or file.endswith('png') or file.endswith('jpeg'):
        shutil.move(file,'./Pictures')
    elif file.endswith('tar') or file.endswith('zip'):
        shutil.move(file,'./Zip Files')
    elif file.endswith('txt') or file.endswith('pdf') or file.endswith('pptx'):
        shutil.move(file,'./Documents')
