/*
    Author: Pakshal Shashikant Jain
    Date: 09/11/2024
    Program: Program to check given strings are Anagram or not
*/

//Required libraries
package main
import "fmt"

/*
    Function name: ChkAngaram
    Parameters: char *arr(First String),char *brr(Second String)
    Return value: boolean value (TRUE/FALSE)
    Purpose: To Check given string is anagram or not
*/
func ChkAnagram(str string,str2 string) bool {
	var arr []rune;
	var brr []rune;
	var i int = 0;
	var j int = 0;
	var icnt int = 0;
	
	arr = []rune(str);
	brr = []rune(str2);

	//Logic to check
	for i = 0;i < len(arr);i++ {
		icnt = 0;
		for j = 0;j < len(brr);j++ {
			if(arr[i] == brr[j]) {
				icnt++;
			}
		} 
		// fmt.Printf("%d",icnt);
		if(icnt < 1) {
			break;
		}
	}

	if(icnt < 1) {
		return false;
	} else {
		return true;
	}
}

//Main function(Entry point function)
func main() {
	var str string = " ";
	var str2 string = " ";
	var bret bool = false;

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Println("Enter first string");
	fmt.Scan(&str);

	fmt.Println("Enter Second String");
	fmt.Scan(&str2);

	//Call to ChkAnagram function
	bret = ChkAnagram(str,str2);

	if(bret == true) {
		fmt.Println("Entered Strings are anagram string");
	} else {
		fmt.Println("Entered Strings are not anagram string");
	}
}