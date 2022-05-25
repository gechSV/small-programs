/*Выполнил Степанов В.Е.
 * ИВТ19-1*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ChatBotXaml
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class RegistrationWindow : Window
    {
        public RegistrationWindow()
        {
            InitializeComponent();
        }

        private void RegButton_Click(object sender, RoutedEventArgs e)
        {
            if (textBoxName.Text.Length > 0)
            {
                MainWindowBot botWin = new MainWindowBot();
                botWin.Bot.SetUsName(textBoxName.Text);
                //botWin.textBlockTape.Text = botWin.Bot.GetUsName();
                botWin.Show();
                this.Close(); 
            } 
            else
            {
                textBoxName.BorderBrush = Brushes.Red;
            }
        }
    }
}
