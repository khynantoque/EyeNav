using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts
{
    class Player
    {
        public string name = "Anonymous";

        public long navScreenTime = 0;
        public long navTimeA = 0;
        public long navTimeB = 0;
        public long navTimeC = 0;
        public long navTimeD = 0;
        public long navTimeExit = 0;

        public int numberOfSwitchingNavs = 0;
        public int numberOfBackToMenu = 0;
    }
}
