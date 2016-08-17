using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Jorvs.biblioteca.livros;

namespace Jorvs.biblioteca
{
    public class Indices
    {
        int codlivros;
        int anocompra;
        int corredor;
        int pratileira;

        Livro livros = new Livro();
        
        public int Codlivros
        {
            get
            {
                return codlivros;
            }

            set
            {
                codlivros = value;
            }
        }

        public int Anocompra
        {
            get
            {
                return anocompra;
            }

            set
            {
                anocompra = value;
            }
        }

        public int Corredor
        {
            get
            {
                return corredor;
            }

            set
            {
                corredor = value;
            }
        }

        public int Pratileira
        {
            get
            {
                return pratileira;
            }

            set
            {
                pratileira = value;
            }
        }

        public Livro Livros
        {
            get
            {
                return livros;
            }

            set
            {
                livros = value;
            }
        }
    }
}
