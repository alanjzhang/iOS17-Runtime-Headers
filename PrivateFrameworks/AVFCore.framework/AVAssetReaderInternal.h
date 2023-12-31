/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetReaderInternal : NSObject {
    AVAsset * asset;
    NSError * error;
    NSError * errorThatOccurredBeforeStartReading;
    struct OpaqueFigAssetReader { } * figAssetReader;
    NSMutableSet * outputFinishedCallbackInvokers;
    NSMutableArray * outputs;
    bool  readSingleSample;
    long long  status;
    NSObject<OS_dispatch_queue> * statusReadWriteQueue;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  timeRange;
    AVWeakReference * weakReference;
}

@end
