using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calc
{
    public partial class Main : Form
    {
        private double a, b;
        private int ch = 0, key = 0;
        private string back1, back2;

        public Main()
        {
            InitializeComponent();
            umn.BackColor = Color.White;
            del.BackColor = Color.White;
            plus.BackColor = Color.Blue;
            minus.BackColor = Color.White;
            step.BackColor = Color.White;
            this.KeyPreview = true;
            this.KeyUp += new System.Windows.Forms.KeyEventHandler(this.Main_KeyUp);
        }

        private void result()
        {
            try
            {
                a = Convert.ToDouble(n1.Text);
                b = Convert.ToDouble(n2.Text);
            }
            catch
            {
                MessageBox.Show("Ошибка: неверный формат ввода");
            }
            switch (ch)
            {
                case 0:
                    Result.Text = Convert.ToString(a + b);
                    break;
                case 1:
                    Result.Text = Convert.ToString(a - b);
                    break;
                case 2:
                    Result.Text = Convert.ToString(a * b);
                    break;
                case 3:
                    if (b != 0)
                    {
                        Result.Text = Convert.ToString(a / b);
                    }
                    else
                    {
                        MessageBox.Show("Ошибка: деление на 0");
                    }
                    break;
                case 4:
                    if ((float)((int)b) == b) //Целое
                    {
                        Result.Text = Convert.ToString(Math.Pow(a, b));
                    }
                    else
                    {
                        MessageBox.Show("Ошибка: степень должна быть целым числом.");
                    }
                    break;
            }
        }

        private void umn_Click(object sender, EventArgs e)
        {
            ch = 2;
            umn.BackColor = Color.Blue;
            del.BackColor = Color.White;
            plus.BackColor = Color.White;
            minus.BackColor = Color.White;
            step.BackColor = Color.White;
        }

        private void minus_Click(object sender, EventArgs e)
        {
            ch = 1;
            umn.BackColor = Color.White;
            del.BackColor = Color.White;
            plus.BackColor = Color.White;
            minus.BackColor = Color.Blue;
            step.BackColor = Color.White;
        }

        private void plus_Click(object sender, EventArgs e)
        {
            ch = 0;
            umn.BackColor = Color.White;
            del.BackColor = Color.White;
            plus.BackColor = Color.Blue;
            minus.BackColor = Color.White;
            step.BackColor = Color.White;
        }

        private void del_Click(object sender, EventArgs e)
        {
            ch = 3;
            umn.BackColor = Color.White;
            del.BackColor = Color.Blue;
            plus.BackColor = Color.White;
            minus.BackColor = Color.White;
            step.BackColor = Color.White;
        }

        private void res_Click(object sender, EventArgs e)
        {
            result();
        }

        private void flowLayoutPanel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void cl_Click(object sender, EventArgs e)
        {
            n1.Text = "";
            n2.Text = "";
            Result.Text = "";
            ch = 0;
            umn.BackColor = Color.White;
            del.BackColor = Color.White;
            plus.BackColor = Color.Blue;
            minus.BackColor = Color.White;
            step.BackColor = Color.White;
        }


        private void step_Click(object sender, EventArgs e)
        {
            ch = 4;
            umn.BackColor = Color.White;
            del.BackColor = Color.White;
            plus.BackColor = Color.White;
            minus.BackColor = Color.White;
            step.BackColor = Color.Blue;
        }
        //Keys
        private void Main_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Add)
            {
                umn.BackColor = Color.White;
                del.BackColor = Color.White;
                plus.BackColor = Color.Blue;
                minus.BackColor = Color.White;
                step.BackColor = Color.White;
                ch = 0;
                n1.Text = back1;
                n2.Text = back2;
            }
            else if (e.KeyCode == Keys.Subtract)
            {
                umn.BackColor = Color.White;
                del.BackColor = Color.White;
                plus.BackColor = Color.White;
                minus.BackColor = Color.Blue;
                step.BackColor = Color.White;
                ch = 1;
                n1.Text = back1;
                n2.Text = back2;
            }
            else if (e.KeyCode == Keys.Multiply)
            {
                umn.BackColor = Color.Blue;
                del.BackColor = Color.White;
                plus.BackColor = Color.White;
                minus.BackColor = Color.White;
                step.BackColor = Color.White;
                ch = 2;
                n1.Text = back1;
                n2.Text = back2;
            }
            else if (e.KeyCode == Keys.Divide)
            {
                umn.BackColor = Color.White;
                del.BackColor = Color.Blue;
                plus.BackColor = Color.White;
                minus.BackColor = Color.White;
                step.BackColor = Color.White;
                ch = 3;
                n1.Text = back1;
                n2.Text = back2;
            }
            else
            {
                back1 = n1.Text;
                back2 = n2.Text;
            }

            /*if (e.KeyCode == Keys.)
            {
                if (ch == 4)
                    ch = 1;
                else
                    ch += 1;
            }
            if (e.KeyCode == Keys.)
            {
                if (ch == 0)
                    ch = 4;
                else
                    ch -= 1;
            } */


            if (e.KeyCode == Keys.Escape)
                cl.PerformClick();
            if (e.KeyCode == Keys.Delete)
                 cl.PerformClick();
            if (e.KeyCode == Keys.Enter)
            {
                if (key == 0)
                {
                    n2.Focus();
                    key = 2;
                }
                else if (key == 2)
                {
                    res.PerformClick();
                    key = 1;
                }
                else if(key == 1)
                {
                    n1.Focus();
                    key = 0;
                }
            }
        }
    }
}
