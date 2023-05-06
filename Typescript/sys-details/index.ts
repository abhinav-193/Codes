import {
  getSystemDetails,
  getRamUses,
  getSystemInfo,
  printDataBeautify,
} from "./utils";

printDataBeautify(getRamUses(), getSystemDetails(), getSystemInfo());
