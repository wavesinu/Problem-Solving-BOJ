hamburger = [int(input()) for _ in range(3)]
beverage = [int(input()) for _ in range(2)]

set_price = (min(hamburger) + min(beverage)) - 50

print(set_price)
