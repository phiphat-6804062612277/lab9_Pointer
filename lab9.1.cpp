#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);   
int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)){
		//if Password is valid
		printf("Accepted\n");
    }
	else {
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
	int accepted=0,i,j;
    int len = strlen(ps);
        //4.1) accepted only if Length = 5 and a number 1 or more digits
    // int counum = 0;
    // for (i=0;i<len;i++){
    //     if(ps[i] >= '0' && ps[i] <= '9'){
    //         counum += 1;
    //     }
    // }
    // if (len == 5 && counum >= 1){
    //     accepted = 1;
    // }
        //4.2) accepted if Length 5-8 The first Char not a number and 2 Uppercase or more and 2 digit or more
    // int fnotnum = 1,numofup = 0,counum = 0;
    // if (isdigit(ps[0])){
    //     fnotnum = 0;
    // }
    // for (i=0;i<len;i++){
    //     if(isupper(ps[i])){
    //         numofup += 1;
    //     }
    //     if(isdigit(ps[i])){
    //         counum += 1;
    //     }
    // }
    // if(len >= 5 && len <= 8 && fnotnum == 1 && numofup >= 2 && counum >= 2){
    //     accepted = 1;
    // }
        //4.3) accepted if Length 5-8 and 2 Uppercase or more and not repeat Uppercase and 2 digit or more
    int numofup = 0,counum = 0,upr[len],repeat=0;
    for (i=0;i<len;i++){
        if(isupper(ps[i])){
            upr[numofup] = ps[i];
            numofup += 1;
        }
        if(isdigit(ps[i])){
            counum += 1;
        }
    }
    for (i=0;i<numofup;i++){
        for (j=i+1;j<numofup;j++){
            if (upr[i] == upr[j]){
                repeat = 1;
                break;
            }
        }
    }
    if(len >= 5 && len <= 8 && numofup >= 2 && counum >= 2 && repeat == 0){
        accepted = 1;
    }
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
