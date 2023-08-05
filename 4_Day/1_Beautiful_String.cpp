// int makeBeautiful(string str) {
// 	// Write your code here
// 	string copy=str;


//     int a=0,b=0;

//     for(int i=0;i<str.size();i++){

//         if(i&1 and str[i]=='0') a++; 

//         if(i%2==0 and str[i]=='1') a++; 

//         if(i&1 and str[i]=='1') b++; 

//         if(i%2==0 and str[i]=='0') b++; 

//     }

//     return min(a,b);
// }


/*
int makeBeautiful(string str) {
    string copy = str;  // Copy the input string to another variable

    int a = 0, b = 0;  // Initialize two counters, 'a' and 'b', to zero

    // Go through each character in the string
    for (int i = 0; i < str.size(); i++) {
        // Check if the position (index) is odd and the character is '0'
        if (i & 1 && str[i] == '0')
            a++;  // Count how many '0' characters are at odd positions

        // Check if the position is even and the character is '1'
        if (i % 2 == 0 && str[i] == '1')
            a++;  // Count how many '1' characters are at even positions

        // Check if the position is odd and the character is '1'
        if (i & 1 && str[i] == '1')
            b++;  // Count how many '1' characters are at odd positions

        // Check if the position is even and the character is '0'
        if (i % 2 == 0 && str[i] == '0')
            b++;  // Count how many '0' characters are at even positions
    }

    // Return the minimum of the two counts, 'a' and 'b'
    return min(a, b);
}

*/