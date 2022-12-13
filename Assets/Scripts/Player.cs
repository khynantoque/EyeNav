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
        public string course;
        public int year;
        public string gender;

        public long startTime = 0;
        public long stopTime = 0;

        public long navigationTimeInSeconds = 0;
        public int numberOfSwitchingNavs = 0;

    }
}
