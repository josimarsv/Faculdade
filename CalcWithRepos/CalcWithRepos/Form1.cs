using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CalcWithRepos
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label13_Click(object sender, EventArgs e)
        {

        }

        private void BtCarregar_Click(object sender, EventArgs e)
        {
            string filepath = "COLOCAR O CAMINHO DO ARQUIVO XML NO REPOSITORIO";

            dadosdatabela.ReadXml(filepath); /* recupera os dados do xml e coloca no data. */
        }
    }
}
