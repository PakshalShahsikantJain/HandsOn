/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 0
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

//Required Libraries
class Find
{
    //Characteristics of Class
    str : string;
    arr : any[];
    ch : any;

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
        this.ch = ' ';
    }

    //Behaviour of Class to Take Input from user
    Accept()
    {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
        this.ch = 'l';
    }

    //Behaviour of Class To First Occurance of Entered Character in String
    Find() : number
    {
        var i : number = 0;

        if(this.arr == null)
        {
            return -1;
        }

        //Logic To Find First Occurance
        while(i != this.arr.length)
        {
            if(this.arr[i] == this.ch)
            {
                break
            }
            i++;
        }

        if(this.arr[i] == this.ch)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of Find Class
    var fobj = new Find();

    //Call To Behaviour of Class
    fobj.Accept();
    iret = fobj.Find();

    //Printing First Occurance of Entered Character
    console.log("First Occurance of Entered Character %s is at index number : %d",fobj.ch,iret);
}

//Call To Main Function
main();