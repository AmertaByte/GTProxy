#ifndef PROXYSTRUCT_H
#define PROXYSTRUCT_H

struct userConfig_ {
    char usingServerData;
    char* serverDataIP;
    char* manualIP;
    char* manualMeta;
    int manualPort;
    char usingNewPacket;
    short httpsPort;
};

struct userCommands_ {
    char isFastRoulette;
};

struct currentInfo_ {
    char* meta;
    char isMetaMalloc;
    char* wk;
    char* rid;
    char* mac;
    char* gid;
    char* deviceID;
    char isLogin;
};

struct OnPacket_ {
    char OnConsoleMessage;
    char OnSendToServer;
    char OnSpawn;
    char OnTalkBubble;
};

struct OnConsoleMessage_ {
    char* message;
};

struct OnSendToServer_ {
    char* serverAddress;
    int port;
    int token;
    int userID;
    char* UUIDToken;
    int unkInt;
    char* rawSplit;
};

struct OnSpawn_ {
    int LocalNetid;
};

extern struct currentInfo_ currentInfo;
extern struct OnPacket_ OnPacket;
extern struct OnConsoleMessage_ OnConsoleMessage;
extern struct OnSendToServer_ OnSendToServer;
extern struct OnSpawn_ OnSpawn;
extern struct userConfig_ userConfig;
extern struct userCommands_ userCommands;

extern char isSendToServer;

#endif // PROXYSTRUCT_H
