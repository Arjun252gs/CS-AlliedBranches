pip install webdriver-manager
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
import time

# --- Set up Chrome WebDriver ---
driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()))

# Open the website
driver.get("https://anyurl") # write the url of the page you need to open here

# Maximize window
driver.maximize_window()

# Wait for the page to load
time.sleep(3)

# --- Smooth scroll to bottom ---
scroll_height = driver.execute_script("return document.body.scrollHeight")
scroll_step = 300       # pixels per scroll step
pause_time = 0.3        # seconds between scrolls

current_position = 0

while current_position < scroll_height:
    current_position += scroll_step
    driver.execute_script(f"window.scrollTo(0, {current_position});")
    time.sleep(pause_time)
    # Update scroll height in case new content loads dynamically
    scroll_height = driver.execute_script("return document.body.scrollHeight")

print("Finished smooth scrolling to the bottom!")

# Wait a few seconds to see the result
time.sleep(3)

# Close the browser
driver.quit()
