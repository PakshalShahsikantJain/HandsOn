/*
    Author: Pakshal Shashikant Jain
    Date: 04/05/2024
    Program: Write a recursive program which display below pattern.
             Output : A B C D E F 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt";
import "os"
import "bufio"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
func Pattern(ino int,ch byte) {
	if(ino < 1) {
		return;
	} else {
		fmt.Printf("%c\t",ch);
		ch++;
		ino--;

		//Recursive Function Call
		Pattern(ino,ch);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;
	var ch byte = ' ';
	var err error;
	
	fmt.Println("Jay Ganesh.....");

	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input From User
	fmt.Println("Enter One Character : ");
	ch,err = bobj.ReadByte();
	
	if err != nil {
		return;
	}

	fmt.Println("Enter One Number : ");
	fmt.Scan(&ino);

	//Call To Pattern Function
	Pattern(ino,ch);
}