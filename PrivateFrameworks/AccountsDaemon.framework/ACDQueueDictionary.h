/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDQueueDictionary : NSObject {
    NSMutableDictionary * _allQueuesByID;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (id)description;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)init;
- (bool)isEmpty;
- (bool)isQueueEmptyForKey:(id)arg1;
- (id)keyForRandomQueue;

@end
