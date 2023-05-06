import requests
from bs4 import BeautifulSoup

courseLink = input("Enter course Link: ")
r = requests.get(courseLink)
soup = BeautifulSoup(r.content, 'html.parser')

# Get course title
courseTitle = soup.find('h1', attrs={'class': 'clp-lead__title'}).text.strip()

# Get course description
courseDescription = soup.find('div', attrs={'class': 'clp-lead__headline'}).text.strip()

# # Get course rating
courseRating = soup.find('span', attrs={'class': 'udlite-heading-sm star-rating--rating-number--2o8YM'}).text.strip()

# Get course author
courseAuthor = soup.find('div', attrs={'class': 'udlite-heading-lg'})
courseAuthor = courseAuthor.find('a').text.strip()

# Print course Details
print("Name: \t\t->\t" + courseTitle)
print("Description: \t->\t" + courseDescription)
print("Rating: \t->\t" + courseRating)
print("Author: \t->\t" + courseAuthor)
