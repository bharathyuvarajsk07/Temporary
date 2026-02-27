if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = sorted(set(arr))
    arr.sort(reverse=True)
    print (arr[1])
