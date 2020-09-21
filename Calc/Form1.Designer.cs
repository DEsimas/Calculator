namespace Calc
{
    partial class Main
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.n1 = new System.Windows.Forms.TextBox();
            this.n2 = new System.Windows.Forms.TextBox();
            this.Result = new System.Windows.Forms.Label();
            this.plus = new System.Windows.Forms.Button();
            this.minus = new System.Windows.Forms.Button();
            this.umn = new System.Windows.Forms.Button();
            this.del = new System.Windows.Forms.Button();
            this.step = new System.Windows.Forms.Button();
            this.res = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.cl = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // n1
            // 
            this.n1.Location = new System.Drawing.Point(12, 61);
            this.n1.Name = "n1";
            this.n1.Size = new System.Drawing.Size(45, 20);
            this.n1.TabIndex = 0;
            // 
            // n2
            // 
            this.n2.Location = new System.Drawing.Point(89, 60);
            this.n2.Name = "n2";
            this.n2.Size = new System.Drawing.Size(45, 20);
            this.n2.TabIndex = 1;
            // 
            // Result
            // 
            this.Result.AutoSize = true;
            this.Result.Location = new System.Drawing.Point(6, 16);
            this.Result.Name = "Result";
            this.Result.Padding = new System.Windows.Forms.Padding(2);
            this.Result.Size = new System.Drawing.Size(4, 17);
            this.Result.TabIndex = 3;
            // 
            // plus
            // 
            this.plus.BackColor = System.Drawing.SystemColors.Control;
            this.plus.Cursor = System.Windows.Forms.Cursors.Hand;
            this.plus.Location = new System.Drawing.Point(63, 60);
            this.plus.Name = "plus";
            this.plus.Size = new System.Drawing.Size(20, 20);
            this.plus.TabIndex = 4;
            this.plus.Text = "+";
            this.plus.UseVisualStyleBackColor = false;
            this.plus.Click += new System.EventHandler(this.plus_Click);
            // 
            // minus
            // 
            this.minus.Cursor = System.Windows.Forms.Cursors.Hand;
            this.minus.Location = new System.Drawing.Point(63, 33);
            this.minus.Name = "minus";
            this.minus.Size = new System.Drawing.Size(20, 21);
            this.minus.TabIndex = 5;
            this.minus.Text = "-";
            this.minus.UseVisualStyleBackColor = true;
            this.minus.Click += new System.EventHandler(this.minus_Click);
            // 
            // umn
            // 
            this.umn.Cursor = System.Windows.Forms.Cursors.Hand;
            this.umn.Location = new System.Drawing.Point(63, 6);
            this.umn.Name = "umn";
            this.umn.Size = new System.Drawing.Size(20, 21);
            this.umn.TabIndex = 6;
            this.umn.Text = "*";
            this.umn.UseVisualStyleBackColor = true;
            this.umn.Click += new System.EventHandler(this.umn_Click);
            // 
            // del
            // 
            this.del.Cursor = System.Windows.Forms.Cursors.Hand;
            this.del.Location = new System.Drawing.Point(63, 86);
            this.del.Name = "del";
            this.del.Size = new System.Drawing.Size(20, 21);
            this.del.TabIndex = 7;
            this.del.Text = "/";
            this.del.UseVisualStyleBackColor = true;
            this.del.Click += new System.EventHandler(this.del_Click);
            // 
            // step
            // 
            this.step.Cursor = System.Windows.Forms.Cursors.Hand;
            this.step.Location = new System.Drawing.Point(63, 113);
            this.step.Name = "step";
            this.step.Size = new System.Drawing.Size(20, 21);
            this.step.TabIndex = 8;
            this.step.Text = "^";
            this.step.UseVisualStyleBackColor = true;
            this.step.Click += new System.EventHandler(this.step_Click);
            // 
            // res
            // 
            this.res.Cursor = System.Windows.Forms.Cursors.Hand;
            this.res.Location = new System.Drawing.Point(140, 59);
            this.res.Name = "res";
            this.res.Size = new System.Drawing.Size(20, 21);
            this.res.TabIndex = 4;
            this.res.Text = "=";
            this.res.UseVisualStyleBackColor = true;
            this.res.Click += new System.EventHandler(this.res_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.Result);
            this.groupBox1.Cursor = System.Windows.Forms.Cursors.No;
            this.groupBox1.Location = new System.Drawing.Point(166, 43);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(98, 94);
            this.groupBox1.TabIndex = 4;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Ответ";
            // 
            // cl
            // 
            this.cl.Cursor = System.Windows.Forms.Cursors.Hand;
            this.cl.Location = new System.Drawing.Point(166, 14);
            this.cl.Name = "cl";
            this.cl.Size = new System.Drawing.Size(75, 23);
            this.cl.TabIndex = 9;
            this.cl.Text = "Очистить";
            this.cl.UseVisualStyleBackColor = true;
            this.cl.Click += new System.EventHandler(this.cl_Click);
            // 
            // Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(276, 145);
            this.Controls.Add(this.cl);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.res);
            this.Controls.Add(this.step);
            this.Controls.Add(this.del);
            this.Controls.Add(this.umn);
            this.Controls.Add(this.minus);
            this.Controls.Add(this.plus);
            this.Controls.Add(this.n2);
            this.Controls.Add(this.n1);
            this.Name = "Main";
            this.Text = "Calculator";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox n1;
        private System.Windows.Forms.TextBox n2;
        private System.Windows.Forms.Label Result;
        private System.Windows.Forms.Button plus;
        private System.Windows.Forms.Button minus;
        private System.Windows.Forms.Button umn;
        private System.Windows.Forms.Button del;
        private System.Windows.Forms.Button step;
        private System.Windows.Forms.Button res;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button cl;
    }
}

