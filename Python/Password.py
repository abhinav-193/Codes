# first we will import the subprocess module
import subprocess
data = subprocess.check_output(['netsh', 'wlan', 'show',
                                'profiles']).decode('utf-8').split('\n')
# now we will store the profile by converting them to list
profiles = [i.split(":")[1][1:-1] for i in data if "All User Profile" in i]
for i in profiles:
    # running the 2nd cmd command to check passwords
    password= subprocess.check_output(['netsh', 'wlan', 'show', 'profile', i,
                        'key=clear']).decode('utf-8').split('\n')
    # storing passwords after converting them to list
    password = [b.split(":")[1][1:-1] for b in password if "Key Content" in b]
    # printing the profiles(wifi name) with their passwords using
    # try and except method for exception handing
    try:
        print ("{:<30}|  {:<}".format(i, password[0]))
    except IndexError:
        print ("{:<30}|  {:<}".format(i, ""))