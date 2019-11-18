import sys
#note: for running this app your pc must have geckodriver.exe file
#Developer : Yash-mathur
#language-python3
import time
from selenium import webdriver
browser = webdriver.Firefox(executable_path=r'E:\geckodriver.exe')

browser.get('https://livesql.oracle.com/apex/f?p=590:1000:8976310816754:')
time.sleep(1)

try:
    sign = browser.find_element_by_css_selector('li.t-NavigationBar-item:nth-child(2)')
    sign.click()
    time.sleep(12)
    uname = browser.find_element_by_css_selector('#userid')
    uname.click()
    uname.send_keys('username')
    upass = browser.find_element_by_css_selector('#pass')
    upass.click()
    upass.send_keys('password')
    ok = browser.find_element_by_css_selector('#signin_button')
    ok.click()
except:
    print("sry try again a network problem has occured")
    time.sleep(5)


