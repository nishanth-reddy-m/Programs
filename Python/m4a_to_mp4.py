import os
path = input('Enter the path: ')
fromtype = '.m4a'
totype = '.mp4'
try:
    os.chdir(path)
except:
    print('Invalid path')
    exit()
os.mkdir('Converted')
for f in os.listdir('.'):
    if fromtype in f:
        file = f.split(fromtype)
        command = f'ffmpeg -i "{f}" -c copy "{os.path.join(os.getcwd(),'Converted',file[0]+totype)}"'
        os.system(command)
        print(f'Converted {f} -> {file[0]+totype}')
print('Convertion Completed')