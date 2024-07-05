function solution(s){
    var answer = 0;

    s=s.toLowerCase();
    
    for(var i=0;i<s.length;i++)
        {
            if (s[i]==='p') answer++;
            if (s[i]==='y') answer--;
        }
   
    return answer===0
}