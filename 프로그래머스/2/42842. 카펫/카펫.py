def solution(brown, yellow):
    total = brown + yellow
    #width는 가로 수 , height는 세로 수
    #brown= 2width+2height-4
    for width in range(1,total+1):
        if total%width==0:
            height=total//width
        if brown == (2*width) + (2*height) - 4:
            return [height, width]
