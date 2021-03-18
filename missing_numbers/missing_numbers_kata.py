
def missing_number(x):
    if x == 0:
        return 2
    n = []
    for i in range(1, 99999999):
        if len(str(i**2)) <= x:
            continue
        number = int(str(i**2)[:-x])
        if not len(n):
            n.append(number)
        elif n[-1] == number:
            continue
        else:
            if number - n[-1] == 0 or number - n[-1] == 1:
                n.append(number)
            else:
                return n[-1] + 1
    return None


if __name__ == '__main__':
    for i in range(13):
        print(missing_number(i))

