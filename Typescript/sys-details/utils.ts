import os from "node:os";

export interface IGetSystemDetails {
  platform: string;
  release: string;
  type: string;
  arch: string;
}

export const getSystemDetails = (): IGetSystemDetails => {
  const { platform, release, type, arch } = os;
  return {
    platform: platform(),
    release: release(),
    type: type(),
    arch: arch(),
  };
};

export interface IGetRamUses {
  totalmem: number;
  freemem: number;
}

export const getRamUses = (): IGetRamUses => {
  const { totalmem, freemem } = os;
  return {
    totalmem: totalmem() / 1024 / 1024 / 1024,
    freemem: freemem() / 1024 / 1024 / 1024,
  };
};

export interface IGetSystemInfo {
  userInfo: os.UserInfo<string>;
}

export const getSystemInfo = (): IGetSystemInfo => {
  const { userInfo } = os;
  return {
    userInfo: userInfo(),
  };
};

export const printDataBeautify = (
  ramUses: IGetRamUses,
  systemDetails: IGetSystemDetails,
  systemInfo: IGetSystemInfo
) => {
  console.log(`
    Platform: ${systemDetails.platform}
    Release: ${systemDetails.release}
    Type: ${systemDetails.type}
    Arch: ${systemDetails.arch}
    Total Memory: ${ramUses.totalmem.toPrecision(3)} GB
    Free Memory: ${ramUses.freemem.toPrecision(3)} GB
    User Info: 
        Username: ${systemInfo.userInfo.username}
        UID: ${systemInfo.userInfo.uid}
        GID: ${systemInfo.userInfo.gid}
        Home Directory: ${systemInfo.userInfo.homedir}
        Shell: ${systemInfo.userInfo.shell}
    `);
};
