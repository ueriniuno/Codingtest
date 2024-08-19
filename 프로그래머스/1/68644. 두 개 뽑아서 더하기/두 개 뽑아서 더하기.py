def solution(numbers):
    arr=[]
    for i in range (0,len(numbers)):
        for j in range (i+1,len(numbers)):
            sum=numbers[i]+numbers[j]
            arr.append(sum)
        
    arr = sorted(set(arr))
    answer = arr
    return answer

# 5,6 -> arr.append(numbers[i]+number[j])
# 8~10 -> sorted(list(set(arr)))
# sorted는 새로운 정렬된 리스트 반환, 원본 리스트 유지
# sort는 원본 리스트 자체 정렬 후 반환값 None.