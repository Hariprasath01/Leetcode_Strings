int firstUniqChar(char * s){
    int length = strlen(s);
    int result[26] = {0};
    
    for(int i = 0; i < length; i++) {
        result[s[i]-'a']++;
    }
    
    for(int i = 0; i < length; i++) {
        //char c = s[i];
        
        if(result[s[i]-'a'] == 1) {
            return i;
        }
    }
    
    return -1;
}
