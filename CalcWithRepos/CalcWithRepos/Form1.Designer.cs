namespace CalcWithRepos
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.BoxCNPJ = new System.Windows.Forms.TextBox();
            this.BoxCodigo = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.BoxVol = new System.Windows.Forms.TextBox();
            this.BoxPeso = new System.Windows.Forms.TextBox();
            this.BoxValorNF = new System.Windows.Forms.TextBox();
            this.BoxM3 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.label13 = new System.Windows.Forms.Label();
            this.label14 = new System.Windows.Forms.Label();
            this.ComboBoxEstados = new System.Windows.Forms.ComboBox();
            this.ComboBoxCidades = new System.Windows.Forms.ComboBox();
            this.label15 = new System.Windows.Forms.Label();
            this.label16 = new System.Windows.Forms.Label();
            this.BtCalcular = new System.Windows.Forms.Button();
            this.dadosdatabela = new System.Data.DataSet();
            this.BtCarregar = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dadosdatabela)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(54, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(174, 18);
            this.label1.TabIndex = 1;
            this.label1.Text = "Calculadora de Fretes";
            // 
            // BoxCNPJ
            // 
            this.BoxCNPJ.Location = new System.Drawing.Point(108, 74);
            this.BoxCNPJ.Name = "BoxCNPJ";
            this.BoxCNPJ.Size = new System.Drawing.Size(164, 20);
            this.BoxCNPJ.TabIndex = 2;
            this.BoxCNPJ.TextChanged += new System.EventHandler(this.BoxCNPJ_TextChanged);
            // 
            // BoxCodigo
            // 
            this.BoxCodigo.Location = new System.Drawing.Point(108, 101);
            this.BoxCodigo.Name = "BoxCodigo";
            this.BoxCodigo.Size = new System.Drawing.Size(163, 20);
            this.BoxCodigo.TabIndex = 3;
            this.BoxCodigo.TextChanged += new System.EventHandler(this.BoxCodigo_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(70, 186);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(138, 15);
            this.label2.TabIndex = 4;
            this.label2.Text = "Dados da nota fiscal";
            // 
            // BoxVol
            // 
            this.BoxVol.Location = new System.Drawing.Point(172, 223);
            this.BoxVol.Name = "BoxVol";
            this.BoxVol.Size = new System.Drawing.Size(100, 20);
            this.BoxVol.TabIndex = 5;
            // 
            // BoxPeso
            // 
            this.BoxPeso.Location = new System.Drawing.Point(172, 249);
            this.BoxPeso.Name = "BoxPeso";
            this.BoxPeso.Size = new System.Drawing.Size(100, 20);
            this.BoxPeso.TabIndex = 6;
            // 
            // BoxValorNF
            // 
            this.BoxValorNF.Location = new System.Drawing.Point(172, 275);
            this.BoxValorNF.Name = "BoxValorNF";
            this.BoxValorNF.Size = new System.Drawing.Size(100, 20);
            this.BoxValorNF.TabIndex = 7;
            // 
            // BoxM3
            // 
            this.BoxM3.Location = new System.Drawing.Point(172, 301);
            this.BoxM3.Name = "BoxM3";
            this.BoxM3.Size = new System.Drawing.Size(100, 20);
            this.BoxM3.TabIndex = 8;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(13, 54);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(68, 13);
            this.label3.TabIndex = 9;
            this.label3.Text = "Razão social";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(13, 80);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(46, 13);
            this.label4.TabIndex = 10;
            this.label4.Text = "C.N.P.J.";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(13, 107);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(40, 13);
            this.label5.TabIndex = 11;
            this.label5.Text = "Código";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(12, 230);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(47, 13);
            this.label6.TabIndex = 12;
            this.label6.Text = "Volumes";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(12, 256);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(31, 13);
            this.label7.TabIndex = 13;
            this.label7.Text = "Peso";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(12, 282);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(31, 13);
            this.label8.TabIndex = 14;
            this.label8.Text = "Valor";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(12, 308);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(80, 13);
            this.label9.TabIndex = 15;
            this.label9.Text = "Metros Cúbicos";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label10.Location = new System.Drawing.Point(81, 418);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(108, 15);
            this.label10.TabIndex = 16;
            this.label10.Text = "Valores do frete";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(12, 446);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(31, 13);
            this.label11.TabIndex = 17;
            this.label11.Text = "Frete";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(12, 469);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(49, 13);
            this.label12.TabIndex = 18;
            this.label12.Text = "Impostos";
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Location = new System.Drawing.Point(12, 492);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(36, 13);
            this.label13.TabIndex = 19;
            this.label13.Text = "Taxas";
            this.label13.Click += new System.EventHandler(this.label13_Click);
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(12, 514);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(68, 13);
            this.label14.TabIndex = 20;
            this.label14.Text = "Frete Liquido";
            // 
            // ComboBoxEstados
            // 
            this.ComboBoxEstados.FormattingEnabled = true;
            this.ComboBoxEstados.Location = new System.Drawing.Point(151, 327);
            this.ComboBoxEstados.Name = "ComboBoxEstados";
            this.ComboBoxEstados.Size = new System.Drawing.Size(121, 21);
            this.ComboBoxEstados.TabIndex = 21;
            // 
            // ComboBoxCidades
            // 
            this.ComboBoxCidades.FormattingEnabled = true;
            this.ComboBoxCidades.Location = new System.Drawing.Point(151, 354);
            this.ComboBoxCidades.Name = "ComboBoxCidades";
            this.ComboBoxCidades.Size = new System.Drawing.Size(121, 21);
            this.ComboBoxCidades.TabIndex = 22;
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Location = new System.Drawing.Point(12, 335);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(40, 13);
            this.label15.TabIndex = 23;
            this.label15.Text = "Estado";
            // 
            // label16
            // 
            this.label16.AutoSize = true;
            this.label16.Location = new System.Drawing.Point(12, 362);
            this.label16.Name = "label16";
            this.label16.Size = new System.Drawing.Size(40, 13);
            this.label16.TabIndex = 24;
            this.label16.Text = "Cidade";
            // 
            // BtCalcular
            // 
            this.BtCalcular.Location = new System.Drawing.Point(197, 381);
            this.BtCalcular.Name = "BtCalcular";
            this.BtCalcular.Size = new System.Drawing.Size(75, 23);
            this.BtCalcular.TabIndex = 25;
            this.BtCalcular.Text = "Calcular";
            this.BtCalcular.UseVisualStyleBackColor = true;
            // 
            // dadosdatabela
            // 
            this.dadosdatabela.DataSetName = "DadosDaTabela";
            // 
            // BtCarregar
            // 
            this.BtCarregar.Location = new System.Drawing.Point(197, 128);
            this.BtCarregar.Name = "BtCarregar";
            this.BtCarregar.Size = new System.Drawing.Size(75, 23);
            this.BtCarregar.TabIndex = 26;
            this.BtCarregar.Text = "Carregar";
            this.BtCarregar.UseVisualStyleBackColor = true;
            this.BtCarregar.Click += new System.EventHandler(this.BtCarregar_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 536);
            this.Controls.Add(this.BtCarregar);
            this.Controls.Add(this.BtCalcular);
            this.Controls.Add(this.label16);
            this.Controls.Add(this.label15);
            this.Controls.Add(this.ComboBoxCidades);
            this.Controls.Add(this.ComboBoxEstados);
            this.Controls.Add(this.label14);
            this.Controls.Add(this.label13);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.BoxM3);
            this.Controls.Add(this.BoxValorNF);
            this.Controls.Add(this.BoxPeso);
            this.Controls.Add(this.BoxVol);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.BoxCodigo);
            this.Controls.Add(this.BoxCNPJ);
            this.Controls.Add(this.label1);
            this.HelpButton = true;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form1";
            this.Text = "Calculadora de fretes";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dadosdatabela)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox BoxCNPJ;
        private System.Windows.Forms.TextBox BoxCodigo;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox BoxVol;
        private System.Windows.Forms.TextBox BoxPeso;
        private System.Windows.Forms.TextBox BoxValorNF;
        private System.Windows.Forms.TextBox BoxM3;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.ComboBox ComboBoxEstados;
        private System.Windows.Forms.ComboBox ComboBoxCidades;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.Label label16;
        private System.Windows.Forms.Button BtCalcular;
        private System.Data.DataSet dadosdatabela;
        private System.Windows.Forms.Button BtCarregar;
    }
}

