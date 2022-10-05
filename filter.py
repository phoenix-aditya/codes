import os
import shutil


directory = "."

for filename in os.listdir():
    if os.path.isdir(filename):
        continue
    
    name,ext = os.path.splitext(filename)
    split_name = name.split(' ')
    cf_codes = ['A_' , 'B_' , 'C_' , 'D_' ,'E_' , 'F_' ,'A.' , 'B.' ,'C.' , 'D.' , 'E.']
    if ext == '.bin':
        os.remove(filename)
    
    elif 'cf' in split_name or 'codeforces' in split_name:
        shutil.move(filename,'codeforces/'+filename)
    
    elif name[0:2] in cf_codes:
        shutil.move(filename,'codeforces/'+filename)
    
    elif 'cses' in [i.lower() for i in split_name]:
        shutil.move(filename, 'cses/'+filename)
    
    elif 'algo' in split_name:
        shutil.move(filename, 'DSA/'+filename)
    elif 'leetcode' in [i.lower() for i in split_name]:
        shutil.move(filename, 'leetcode/'+filename)
    
    elif 'spoj' in [i.lower() for i in split_name]:
        shutil.move(filename, 'spoj/'+filename)
    
    elif 'hackerearth' in [i.lower() for i in split_name]:
        shutil.move(filename, 'hackerearth/'+filename)
    
    elif 'template' in name:
        shutil.move(filename, 'templates/'+filename)
    
    elif len(split_name) <= 2:
        shutil.move(filename, 'codechef/'+filename)
    
    else:
        shutil.move(filename, 'others/'+filename)


