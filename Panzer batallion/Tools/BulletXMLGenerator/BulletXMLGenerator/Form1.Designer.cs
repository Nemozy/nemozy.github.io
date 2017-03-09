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
            this.Name_label = new System.Windows.Forms.Label();
            this.Name_textBox = new System.Windows.Forms.TextBox();
            this.Blocked_label = new System.Windows.Forms.Label();
            this.UpgradeLvL_textBox = new System.Windows.Forms.TextBox();
            this.UpgradeLvL_label = new System.Windows.Forms.Label();
            this.MinDmg_textBox = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.MaxDmg_textBox = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.Count_label = new System.Windows.Forms.Label();
            this.Blocked_comboBox = new System.Windows.Forms.ComboBox();
            this.Count_textBox = new System.Windows.Forms.TextBox();
            this.Endless_comboBox = new System.Windows.Forms.ComboBox();
            this.Endless_label = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.Names_comboBox = new System.Windows.Forms.ComboBox();
            this.Add_button = new System.Windows.Forms.Button();
            this.Delete_button = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.Save_button = new System.Windows.Forms.Button();
            this.SlotName_label = new System.Windows.Forms.Label();
            this.SlotName_textBox = new System.Windows.Forms.TextBox();
            this.DmgRadius_textBox = new System.Windows.Forms.TextBox();
            this.DmgRadius_label = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // openXMLFileDialog
            // 
            this.openXMLFileDialog.FileName = "openXMLFileDialog";
            // 
            // SaveXML_Button
            // 
            this.SaveXML_Button.Location = new System.Drawing.Point(108, 228);
            this.SaveXML_Button.Name = "SaveXML_Button";
            this.SaveXML_Button.Size = new System.Drawing.Size(93, 23);
            this.SaveXML_Button.TabIndex = 0;
            this.SaveXML_Button.Text = "Сохранить XML";
            this.SaveXML_Button.UseVisualStyleBackColor = true;
            this.SaveXML_Button.Click += new System.EventHandler(this.SaveXML_Button_Click);
            // 
            // LoadXML_Button
            // 
            this.LoadXML_Button.Location = new System.Drawing.Point(6, 228);
            this.LoadXML_Button.Name = "LoadXML_Button";
            this.LoadXML_Button.Size = new System.Drawing.Size(96, 23);
            this.LoadXML_Button.TabIndex = 1;
            this.LoadXML_Button.Text = "Загрузить XML";
            this.LoadXML_Button.UseVisualStyleBackColor = true;
            this.LoadXML_Button.Click += new System.EventHandler(this.LoadXML_Button_Click);
            // 
            // Name_label
            // 
            this.Name_label.AutoSize = true;
            this.Name_label.Location = new System.Drawing.Point(9, 22);
            this.Name_label.Name = "Name_label";
            this.Name_label.Size = new System.Drawing.Size(83, 13);
            this.Name_label.TabIndex = 2;
            this.Name_label.Text = "Наименование";
            // 
            // Name_textBox
            // 
            this.Name_textBox.Location = new System.Drawing.Point(104, 19);
            this.Name_textBox.Name = "Name_textBox";
            this.Name_textBox.Size = new System.Drawing.Size(172, 20);
            this.Name_textBox.TabIndex = 3;
            // 
            // Blocked_label
            // 
            this.Blocked_label.AutoSize = true;
            this.Blocked_label.Location = new System.Drawing.Point(9, 74);
            this.Blocked_label.Name = "Blocked_label";
            this.Blocked_label.Size = new System.Drawing.Size(80, 13);
            this.Blocked_label.TabIndex = 4;
            this.Blocked_label.Text = "Заблокирован";
            // 
            // UpgradeLvL_textBox
            // 
            this.UpgradeLvL_textBox.Location = new System.Drawing.Point(104, 97);
            this.UpgradeLvL_textBox.Name = "UpgradeLvL_textBox";
            this.UpgradeLvL_textBox.Size = new System.Drawing.Size(172, 20);
            this.UpgradeLvL_textBox.TabIndex = 7;
            this.UpgradeLvL_textBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.UpgradeLvL_textBox_KeyPress);
            // 
            // UpgradeLvL_label
            // 
            this.UpgradeLvL_label.AutoSize = true;
            this.UpgradeLvL_label.Location = new System.Drawing.Point(9, 100);
            this.UpgradeLvL_label.Name = "UpgradeLvL_label";
            this.UpgradeLvL_label.Size = new System.Drawing.Size(89, 13);
            this.UpgradeLvL_label.TabIndex = 6;
            this.UpgradeLvL_label.Text = "Уровень грейда";
            // 
            // MinDmg_textBox
            // 
            this.MinDmg_textBox.Location = new System.Drawing.Point(104, 123);
            this.MinDmg_textBox.Name = "MinDmg_textBox";
            this.MinDmg_textBox.Size = new System.Drawing.Size(76, 20);
            this.MinDmg_textBox.TabIndex = 9;
            this.MinDmg_textBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.MinDmg_textBox_KeyPress);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(9, 126);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(33, 13);
            this.label3.TabIndex = 8;
            this.label3.Text = "Урон";
            // 
            // MaxDmg_textBox
            // 
            this.MaxDmg_textBox.Location = new System.Drawing.Point(202, 123);
            this.MaxDmg_textBox.Name = "MaxDmg_textBox";
            this.MaxDmg_textBox.Size = new System.Drawing.Size(74, 20);
            this.MaxDmg_textBox.TabIndex = 11;
            this.MaxDmg_textBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.MaxDmg_textBox_KeyPress);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(186, 126);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(10, 13);
            this.label4.TabIndex = 10;
            this.label4.Text = "-";
            // 
            // Count_label
            // 
            this.Count_label.AutoSize = true;
            this.Count_label.Location = new System.Drawing.Point(9, 178);
            this.Count_label.Name = "Count_label";
            this.Count_label.Size = new System.Drawing.Size(66, 13);
            this.Count_label.TabIndex = 12;
            this.Count_label.Text = "Количество";
            // 
            // Blocked_comboBox
            // 
            this.Blocked_comboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Blocked_comboBox.FormatString = "TRUE/FALSE";
            this.Blocked_comboBox.FormattingEnabled = true;
            this.Blocked_comboBox.Items.AddRange(new object[] {
            "TRUE",
            "FALSE"});
            this.Blocked_comboBox.Location = new System.Drawing.Point(104, 71);
            this.Blocked_comboBox.Name = "Blocked_comboBox";
            this.Blocked_comboBox.Size = new System.Drawing.Size(172, 21);
            this.Blocked_comboBox.TabIndex = 14;
            // 
            // Count_textBox
            // 
            this.Count_textBox.Location = new System.Drawing.Point(104, 175);
            this.Count_textBox.Name = "Count_textBox";
            this.Count_textBox.Size = new System.Drawing.Size(172, 20);
            this.Count_textBox.TabIndex = 13;
            this.Count_textBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Count_textBox_KeyPress);
            // 
            // Endless_comboBox
            // 
            this.Endless_comboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Endless_comboBox.FormatString = "TRUE/FALSE";
            this.Endless_comboBox.FormattingEnabled = true;
            this.Endless_comboBox.Items.AddRange(new object[] {
            "TRUE",
            "FALSE"});
            this.Endless_comboBox.Location = new System.Drawing.Point(104, 201);
            this.Endless_comboBox.Name = "Endless_comboBox";
            this.Endless_comboBox.Size = new System.Drawing.Size(172, 21);
            this.Endless_comboBox.TabIndex = 16;
            // 
            // Endless_label
            // 
            this.Endless_label.AutoSize = true;
            this.Endless_label.Location = new System.Drawing.Point(9, 204);
            this.Endless_label.Name = "Endless_label";
            this.Endless_label.Size = new System.Drawing.Size(75, 13);
            this.Endless_label.TabIndex = 15;
            this.Endless_label.Text = "Бесконечные";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.Names_comboBox);
            this.groupBox1.Controls.Add(this.LoadXML_Button);
            this.groupBox1.Controls.Add(this.SaveXML_Button);
            this.groupBox1.Location = new System.Drawing.Point(305, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(207, 263);
            this.groupBox1.TabIndex = 17;
            this.groupBox1.TabStop = false;
            // 
            // Names_comboBox
            // 
            this.Names_comboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Names_comboBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Names_comboBox.FormattingEnabled = true;
            this.Names_comboBox.Location = new System.Drawing.Point(6, 19);
            this.Names_comboBox.Name = "Names_comboBox";
            this.Names_comboBox.Size = new System.Drawing.Size(195, 25);
            this.Names_comboBox.TabIndex = 18;
            this.Names_comboBox.SelectedIndexChanged += new System.EventHandler(this.Names_comboBox_SelectedIndexChanged);
            // 
            // Add_button
            // 
            this.Add_button.Location = new System.Drawing.Point(202, 228);
            this.Add_button.Name = "Add_button";
            this.Add_button.Size = new System.Drawing.Size(75, 23);
            this.Add_button.TabIndex = 19;
            this.Add_button.Text = "Добавить";
            this.Add_button.UseVisualStyleBackColor = true;
            this.Add_button.Click += new System.EventHandler(this.Add_button_Click);
            // 
            // Delete_button
            // 
            this.Delete_button.Location = new System.Drawing.Point(105, 228);
            this.Delete_button.Name = "Delete_button";
            this.Delete_button.Size = new System.Drawing.Size(75, 23);
            this.Delete_button.TabIndex = 20;
            this.Delete_button.Text = "Удалить";
            this.Delete_button.UseVisualStyleBackColor = true;
            this.Delete_button.Click += new System.EventHandler(this.Delete_button_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.DmgRadius_textBox);
            this.groupBox2.Controls.Add(this.DmgRadius_label);
            this.groupBox2.Controls.Add(this.SlotName_label);
            this.groupBox2.Controls.Add(this.SlotName_textBox);
            this.groupBox2.Controls.Add(this.Save_button);
            this.groupBox2.Controls.Add(this.Count_textBox);
            this.groupBox2.Controls.Add(this.Delete_button);
            this.groupBox2.Controls.Add(this.Name_label);
            this.groupBox2.Controls.Add(this.Add_button);
            this.groupBox2.Controls.Add(this.Name_textBox);
            this.groupBox2.Controls.Add(this.Blocked_label);
            this.groupBox2.Controls.Add(this.Endless_comboBox);
            this.groupBox2.Controls.Add(this.UpgradeLvL_label);
            this.groupBox2.Controls.Add(this.Endless_label);
            this.groupBox2.Controls.Add(this.UpgradeLvL_textBox);
            this.groupBox2.Controls.Add(this.Blocked_comboBox);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Controls.Add(this.MinDmg_textBox);
            this.groupBox2.Controls.Add(this.Count_label);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.MaxDmg_textBox);
            this.groupBox2.Location = new System.Drawing.Point(7, 12);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(292, 263);
            this.groupBox2.TabIndex = 19;
            this.groupBox2.TabStop = false;
            // 
            // Save_button
            // 
            this.Save_button.Location = new System.Drawing.Point(9, 228);
            this.Save_button.Name = "Save_button";
            this.Save_button.Size = new System.Drawing.Size(75, 23);
            this.Save_button.TabIndex = 21;
            this.Save_button.Text = "Сохранить";
            this.Save_button.UseVisualStyleBackColor = true;
            this.Save_button.Click += new System.EventHandler(this.Save_button_Click);
            // 
            // SlotName_label
            // 
            this.SlotName_label.AutoSize = true;
            this.SlotName_label.Location = new System.Drawing.Point(9, 48);
            this.SlotName_label.Name = "SlotName_label";
            this.SlotName_label.Size = new System.Drawing.Size(31, 13);
            this.SlotName_label.TabIndex = 22;
            this.SlotName_label.Text = "Слот";
            // 
            // SlotName_textBox
            // 
            this.SlotName_textBox.Location = new System.Drawing.Point(104, 45);
            this.SlotName_textBox.Name = "SlotName_textBox";
            this.SlotName_textBox.Size = new System.Drawing.Size(172, 20);
            this.SlotName_textBox.TabIndex = 23;
            // 
            // DmgRadius_textBox
            // 
            this.DmgRadius_textBox.Location = new System.Drawing.Point(104, 149);
            this.DmgRadius_textBox.Name = "DmgRadius_textBox";
            this.DmgRadius_textBox.Size = new System.Drawing.Size(172, 20);
            this.DmgRadius_textBox.TabIndex = 25;
            this.DmgRadius_textBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.DmgRadius_textBox_KeyPress);
            // 
            // DmgRadius_label
            // 
            this.DmgRadius_label.AutoSize = true;
            this.DmgRadius_label.Location = new System.Drawing.Point(9, 152);
            this.DmgRadius_label.Name = "DmgRadius_label";
            this.DmgRadius_label.Size = new System.Drawing.Size(75, 13);
            this.DmgRadius_label.TabIndex = 24;
            this.DmgRadius_label.Text = "Радиус атаки";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(522, 286);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.MaximumSize = new System.Drawing.Size(538, 325);
            this.MinimumSize = new System.Drawing.Size(538, 325);
            this.Name = "Form1";
            this.Text = "Генератор оружия";
            this.groupBox1.ResumeLayout(false);
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.OpenFileDialog openXMLFileDialog;
        private System.Windows.Forms.SaveFileDialog saveXMLFileDialog;
        private System.Windows.Forms.Button SaveXML_Button;
        private System.Windows.Forms.Button LoadXML_Button;
        private System.Windows.Forms.Label Name_label;
        private System.Windows.Forms.TextBox Name_textBox;
        private System.Windows.Forms.Label Blocked_label;
        private System.Windows.Forms.TextBox UpgradeLvL_textBox;
        private System.Windows.Forms.Label UpgradeLvL_label;
        private System.Windows.Forms.TextBox MinDmg_textBox;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox MaxDmg_textBox;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label Count_label;
        private System.Windows.Forms.ComboBox Blocked_comboBox;
        private System.Windows.Forms.TextBox Count_textBox;
        private System.Windows.Forms.ComboBox Endless_comboBox;
        private System.Windows.Forms.Label Endless_label;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ComboBox Names_comboBox;
        private System.Windows.Forms.Button Add_button;
        private System.Windows.Forms.Button Delete_button;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button Save_button;
        private System.Windows.Forms.TextBox DmgRadius_textBox;
        private System.Windows.Forms.Label DmgRadius_label;
        private System.Windows.Forms.Label SlotName_label;
        private System.Windows.Forms.TextBox SlotName_textBox;
    }
}

