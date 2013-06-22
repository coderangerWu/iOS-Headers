/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct AVControllerPrivate {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    Class _field6;
    id _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    int _field12;
    char _field13;
    id _field14;
    float _field15;
    struct __CFString *_field16;
    id _field17;
    char _field18;
    char _field19;
    char _field20;
    id _field21;
    struct OpaqueFigVisualContext *_field22;
    id _field23;
    struct __CFRunLoop *_field24;
    unsigned int _field25;
    int _field26;
    int _field27;
    int _field28;
    char _field29;
    char _field30;
    char _field31;
    char _field32;
    id _field33;
    struct OpaqueFigPlayer *_field34;
    id _field35;
    id _field36;
    id _field37;
    char _field38;
    char _field39;
    id _field40;
    id _field41;
    char _field42;
    char _field43;
    char _field44;
    int _field45;
    char _field46;
};

struct AVExternalAudioPrivate {
    char _field1;
    struct OpaqueFigPlayer *_field2;
    id _field3;
    char _field4;
};

struct AVFileValidatorPrivate {
    id _field1;
    id _field2;
    struct FigOpaqueMediaValidator *_field3;
    struct FigMediaValidatorDataLocation _field4;
    struct OpaqueCMByteStream *_field5;
    char _field6;
    char _field7;
    id _field8;
};

struct AVItemPrivate {
    id _field1;
    id _field2;
    double _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned int _field7;
    char _field8;
    char _field9;
    id _field10;
    int _field11;
    long long _field12;
    long long _field13;
    char _field14;
    id _field15;
    id _field16;
    char _field17;
    char _field18;
    id _field19;
    id _field20;
    struct OpaqueMD5CheckProgress *_field21;
    struct OpaqueFigThread *_field22;
    struct OpaqueCMByteStream *_field23;
    int _field24;
    id _field25;
    id _field26;
};

struct AVRecorderPrivate {
    id _field1;
    id _field2;
};

struct AVRemakerPrivate {
    struct OpaqueFigRemaker *_field1;
    char _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    double _field9;
};

struct AVSubtitleLayerUsingWebKitPrivate {
    struct __GSFont *_field1;
    struct __CFAttributedString *_field2;
};

struct AVSystemControllerPrivate {
    char _field1;
    char _field2;
    float _field3;
    id _field4;
    struct OpaqueFigPlayer *_field5;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueLevelMeterState {
    float _field1;
    float _field2;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioTimeStamp {
    double _field1;
    unsigned long long _field2;
    double _field3;
    unsigned long long _field4;
    struct SMPTETime _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGSize {
    float width;
    float height;
};

struct FigMediaValidatorDataLocation {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct FigOpaqueMediaValidator;

struct OpaqueCMByteStream;

struct OpaqueFigPlayer;

struct OpaqueFigRemaker;

struct OpaqueFigThread;

struct OpaqueFigVisualContext;

struct OpaqueMD5CheckProgress;

struct SMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

#pragma mark Typedef'd Structures

typedef struct {
    double w;
    double x;
    double y;
    double z;
} CDStruct_bf7dff04;

typedef struct {
    double timestamp;
    float x;
    float y;
    float z;
} CDStruct_f31118bd;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_bf7dff04 _field1;
    CDStruct_03942939 _field2;
    CDStruct_03942939 _field3;
    CDStruct_03942939 _field4;
    int _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
} CDStruct_7fb6ae47;

