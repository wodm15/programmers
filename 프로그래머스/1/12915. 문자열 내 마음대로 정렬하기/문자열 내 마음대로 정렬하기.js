function solution(strings, n) {
    
    strings.sort();
    strings.sort(function(a, b) {
        const t1 = a[n];
        const t2 = b[n];
        
        if (t1 == t2)
        {} //이미 sort처음에 해서 넘어가도 됨.
        else 
        {  
            return t1.localeCompare(t2); 
        }
        // t1> t2는 return -1로 거짓이니 넘어감 , 같으면 넘어가고, t1 < t2 이면 return 1로 정렬하게 됨
    });

    return strings;
}