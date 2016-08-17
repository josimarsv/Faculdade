using System;

namespace Jorvs.biblioteca.livros
{
    public class Livro
    {
        string titulo;
        string autor;
        int AnoPublicacao;

        public string Titulo
        {
            get
            {
                return titulo;
            }

            set
            {
                titulo = value;
            }
        }

        public string Autor
        {
            get
            {
                return autor;
            }

            set
            {
                autor = value;
            }
        }

        public int AnoPublicacao1
        {
            get
            {
                return AnoPublicacao;
            }

            set
            {
                AnoPublicacao = value;
            }
        }
    }
}
