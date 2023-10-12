/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTREventPath : MTRClusterPath {
    NSNumber * _event;
}

@property (nonatomic, readonly, copy) NSNumber *event;

// MTREventPath (null)

+ (id)eventPathWithEndpointID:(id)arg1 clusterID:(id)arg2 eventID:(id)arg3;
+ (id)eventPathWithEndpointId:(id)arg1 clusterId:(id)arg2 eventId:(id)arg3;

- (void).cxx_destruct;
- (struct ConcreteEventPath { unsigned short x1; bool x2; unsigned int x3; unsigned int x4; })_asConcretePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)event;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x1; bool x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
