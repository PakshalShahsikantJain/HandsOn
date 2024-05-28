/*
    Author : Pakshal Shashikant Jain 
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (	
	"fmt"
	"bufio"
	"os"
	"strings"
)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function Count Frequency of Character From File 
func CountChar(fname string,ch rune) int {
	var icnt int = 0;
	var i int = 0;

	//Opening File in Read Mode Only
	fd,err := os.OpenFile(fname,os.O_RDONLY,0644);

	if(err != nil) {
		fmt.Println("Unable to Open File : ",err);
	} else {
		fmt.Printf("File Successfully Opened With File Descriptor %d\n",fd.Fd());
	}
	
	//Calculating Size of File 
	isize,err := fd.Seek(0,2);

	if(err != nil) {
		return -1;
	}

	//Local Array to Store Data From File 
	arr := make([]byte,isize);

	fd.Seek(0,0);

	//Reading Data From File and Storing it in Local Array  
	iret,err := fd.Read(arr);
	
	fmt.Println("Data From File is : ");
	fmt.Print(string(arr));

	fmt.Println("\nNo of Bytes Successfully Readed From File : ",iret);

	//Counting Number of Characters From File 
	for i = 0;i < len(arr);i++ {
		if(rune(arr[i]) == ch) {
			icnt++;
		}
	}

	//Closing File 
	fd.Close();

	//Returning Count of Entered 
	return icnt;	
}	

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iret int = 0;
	var fname string = " ";
	var err error = nil;
	var ch rune = ' ';

	fmt.Println("Jay Ganesh......");

	var bobj = bufio.NewReader(os.Stdin);

	//Taking File Name and Character as Input From User
	fmt.Println("Enter File Name : ");
	fname,err = bobj.ReadString('\n');

	fname = strings.TrimSpace(fname);

	if(err != nil) {
		fmt.Print("An Error Occured While Take Input From User : ",err);
	}

	fmt.Println("Enter Character You Want To Count Frequency of From File : ");
	fmt.Scanf("%c",&ch);
	
	//Call To CountChar Function 
	iret = CountChar(fname,ch);

	//Printing Count of Entered Character From File 
	fmt.Printf("Count of Character From File is : %d",iret);
}