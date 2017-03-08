namespace BulletXMLGenerator
{
    partial class Form1
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
            this.openXMLFileDialog = new System.Windows.Forms.OpenFileDialog();
            this.saveXMLFileDialog = new System.Windows.Forms.SaveFileDialog();
            this.SaveXML_Button = new System.Windows.Forms.Button();
            this.LoadXML_Button = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // openXMLFileDialog
            // 
            this.openXMLFileDialog.FileName = "openXMLFileDialog";
            // 
            // SaveXML_Button
            // 
            this.SaveXML_Button.Location = new System.Drawing.Point(463, 295);
            this.SaveXML_Button.Name = "SaveXML_Button";
            this.SaveXML_Button.Size = new System.Drawing.Size(75, 23);
            this.SaveXML_Button.TabIndex = 0;
            this.SaveXML_Button.Text = "Save";
            this.SaveXML_Button.UseVisualStyleBackColor = true;
            this.SaveXML_Button.Click += new System.EventHandler(this.SaveXML_Button_Click);
            // 
            // LoadXML_Button
            // 
            this.LoadXML_Button.Location = new System.Drawing.Point(463, 266);
            this.LoadXML_Button.Name = "LoadXML_Button";
            this.LoadXML_Button.Size = new System.Drawing.Size(75, 23);
            this.LoadXML_Button.TabIndex = 1;
            this.LoadXML_Button.Text = "Load";
            this.LoadXML_Button.UseVisualStyleBackColor = true;
            this.LoadXML_Button.Click += new System.EventHandler(this.LoadXML_Button_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(550, 330);
            this.Controls.Add(this.LoadXML_Button);
            this.Controls.Add(this.SaveXML_Button);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.OpenFileDialog openXMLFileDialog;
        private System.Windows.Forms.SaveFileDialog saveXMLFileDialog;
        private System.Windows.Forms.Button SaveXML_Button;
        private System.Windows.Forms.Button LoadXML_Button;
    }
}

