import java.lang.*;
import java.util.*;

class Pattern
{
    int ino = 0;
    char ch = ' ';

    Pattern(int ivalue,char cvalue)
    {
        this.ino = ivalue;
        this.ch = cvalue;        
    }

    void DisplayPattern()
    {
        int ascii = 0;

        if(this.ino < 1)
        {
            return;
        }
        else 
        {
            System.out.printf("%c \t",this.ch);
            ascii = (int)this.ch + 1;   
            this.ch = (char)ascii;
            this.ino--;
            this.DisplayPattern();
        }
    }
}

class Display 
{
    public static void main(String args[])
    {
        int ino = 0;
        char ch = ' ';

        System.out.println("Jay Ganesh....");

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One Number : ");
        ino = sobj.nextInt();

        System.out.println("Enter One Character : ");
        ch = sobj.next().charAt(0);

        Pattern pobj = new Pattern(ino,ch);

        System.out.println("Output : ");
        pobj.DisplayPattern();

        pobj = null;
    }
}