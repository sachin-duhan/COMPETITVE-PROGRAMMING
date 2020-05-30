def specialCheck(string, i, count):
    for j in range(count):
        if(string[i] != string[i+j]):
            return 0
    return count


def check(char, string, i, count=3):
    if(char == '+' and (int(ord(string[i])) <= 122 and int(ord(string[i])) >= 97)):
        return 1
    elif(char == '$' and (int(string[i]) > 0 and int(string[i]) < 10)):
        return 1
    elif(char == '*'):
        return specialCheck(string, i, count)
    else:
        return 0


def solve(string):
    temp = string.split(" ")
    i = 0
    j = 0
    regex = temp[0]
    main_string = temp[1]
    regex_len = len(regex)
    main_string_len = len(main_string)
    isSpecialCharWithNum = 0
    while(i < regex_len and j < main_string):
        c = regex[i]
        if(c == "*" and j+1 < len(main_string) and main_string[j+1] == '{'):
            check_val = check(c, string, j, int(main_string[j+2]))
            isSpecialCharWithNum = 1
        else:
            check_val = check(c, string, j)
        if(check_val == 0):
            return "false"
        else:
            if(isSpecialCharWithNum > 0):
                i += int(main_string[j+2])
            else :
                i+= 1
            j += check_val

    return "true"


s = "$**+*{2} 9mmmrrrkbb"
print(solve(s))
