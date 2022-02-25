
import javax.swing.*;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class Calculate extends JFrame implements ActionListener
{
JButton n1,n2,n3,n4,n5,n6,n7,n8,n9,n0,a,mul,sub,div,e,c,mod;
JLabel res,mmm,ja,jl,jk;
int num1,num2,num3;
String oper;
Calculate()
{
c=new JButton("c");
n1=new JButton("1");
n2=new JButton("2");
n3=new JButton("3");
n4=new JButton("4");
n5=new JButton("5");
n6=new JButton("6");
n7=new JButton("7");
n8=new JButton("8");
n9=new JButton("9");
n0=new JButton("0");
a=new JButton("+");
mul=new JButton("*");
sub=new JButton("-");
div=new JButton("/");
e=new JButton("=");
mod=new JButton("%");
res=new JLabel("");
mmm=new JLabel("");
setLayout(new GridLayout(0,3));
add(n1);
add(n2);
add(n3);
add(n4);
add(n5);
add(n6);
add(n7);
add(n8);
add(n9);
add(sub);
add(n0);
add(a);
add(mul);
add(div);
add(mod);
add(c);
add(e);
add(mmm);
add(res);
setVisible(true);
setSize(400,400);
setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
n1.addActionListener(this);
n2.addActionListener(this);
n3.addActionListener(this);
n4.addActionListener(this);
n5.addActionListener(this);
n6.addActionListener(this);
n7.addActionListener(this);
n8.addActionListener(this);
n9.addActionListener(this);
n0.addActionListener(this);
a.addActionListener(this);
mul.addActionListener(this);
sub.addActionListener(this);
mod.addActionListener(this);
div.addActionListener(this);
e.addActionListener(this);
c.addActionListener(this);
}
public void actionPerformed(ActionEvent ac)
{
JButton jb=(JButton)ac.getSource();
if(jb==c)
{
res.setText("");
oper="";
}
else if(jb==a||jb==mul||jb==sub||jb==div||jb==mod)
{
try
{
num1=Integer.parseInt(res.getText());
oper=jb.getText();
res.setText(jb.getText());
}
catch(Exception e)
{
res.setText("illegal use");
}
}
else if(jb==e)
{ num2=Integer.parseInt(res.getText());
try
{
switch(oper)
{
case "+":num3=num1+num2;
break;
case "-":num3=num1-num2;
break;
case "/":num3=num1/num2;
break;
case "*":num3=num1*num2;
break;
case "%":num3=num1%num2;
break;
}
res.setText(num1+oper+num2+"="+Integer.toString(num3));
}
catch(ArithmeticException e)
{
res.setText(num1+oper+num2+"="+"ERROR");
}
}
else
{
String strr;
strr=res.getText();
if(strr=="-"||strr=="/"||strr=="+"||strr=="*"||strr=="Division by zero"||strr=="illegal use"||strr=="%")
{
res.setText("");
}
res.setText(res.getText()+jb.getText());
}
}
}
public class Exp30_calculator
{
public static void main(String args[])
{
Calculate obj=new Calculate	();
}
}

	