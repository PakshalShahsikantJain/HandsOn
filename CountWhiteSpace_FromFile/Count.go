/*
    Author : Pakshal Shashikant Jain 
    Date : 26/05/2024
    Program : Write a program which accepts file name from user and count number of
              white spaces from that file.

              Input : Demo.txt
              Output : Number of white spaces are 13 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
	"strings"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count White Space From File 
func CountWhiteSpace(fname string) int {
	var i int = 0;
	var icnt int = 0;

	//Opening File in Read Mode Only
	fd,err := os.OpenFile(fname,os.O_RDONLY,0644);

	if(err != nil) {
		fmt.Println("Unable To open File",err);
	} else {
		fmt.Printf("File Successfully Opened With File Descriptor : %d",fd.Fd());
	}

	//Calculating size of File
	isize,err := fd.Seek(0,2);

	if(err != nil) {
		return -1;
	}

	//Local Array To Store Data From File 
	arr := make([]byte,isize);

	//Bringing Cursor Back To Intial Position
	fd.Seek(0,0);	

	//Reading Data From File and Storing it in Local Array 
	iret,err := fd.Read(arr);
	fmt.Println("Data From File is : ");
	fmt.Print(string(arr));

	fmt.Printf("\nNo of Bytes Successfully Readed From File : %d bytes\n",iret);

	//Counting No of White Spaces From File 
	for i = 0;i < len(arr);i++ {
		if(rune(arr[i]) == ' ') {
			icnt++;
		}
	}

	//Returning Count of White Spaces
	return icnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var fname string = " ";
	var err error = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh.....");

	var bobj = bufio.NewReader(os.Stdin);

	//Taking File Name As Input From User
	fmt.Println("Enter File Name : ");
	fname,err = bobj.ReadString('\n');

	if(err != nil) {
		fmt.Println("An Error Occured While Taking Input From User : ",err);
	}

	//Removing Extra White Spaces From File name 
	fname = strings.TrimSpace(fname);

	//Call To CountWhiteSpace Function
	iret = CountWhiteSpace(fname);
	//Printing Count of White Space 
	fmt.Printf("\nCount of White Space From File is : %d",iret);

	bobj = nil;
}