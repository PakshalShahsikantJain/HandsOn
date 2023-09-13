/*
    Author : Pakshal Shashikant Jain 
    Date : 13/09/2023
    Program : Write a program which accepts 2 strings from user and concat N
              characters of second string after first string.Value of N should be
              accepted from user. (Implement strncat() function).

              Note : If third parameter is greater than the size of second string then
              concat whole string after first string.

              Input : "Marvellous Infosystems"
                      "Logic Building"
                       5
              Output : "Marvellous Infosystems Logic"
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCat
{
    //Characteristics of Class
    str : string;
    str2 : string;
    arr : any[50];
    brr : any[30];
    icnt : number;

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.str2 = " ";
        this.arr = [];
        this.brr = [];
        this.icnt = 0;
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Marvellous Infosystem";
        this.str2 = "Logic Building";
        this.arr = Array.from(this.str);
        this.brr = Array.from(this.str2);
        this.icnt = 9;
    }

    //Behaviour of Class To Concat Second String into First String till Entered Size
    StrNCatX()
    {
        var i : number = 0;
        var j : number = 0;

        //Logic To Concatenate String
        while(i != this.arr.length)
        {
            i++;
        }
        this.arr[i] = " ";
        i++;
        while((j != this.brr.length)&&(this.icnt != 0))
        {
            this.arr[i] = this.brr[j];
            i++;
            j++;
            this.icnt--;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh.....");

    //Creating object of StringCat Class
    var sobj = new StringCat();
    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrNCatX();

    //Printing Concatenated String
    console.log("Concatenated String is : ",sobj.arr.join(''));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call TO Main Function
main();