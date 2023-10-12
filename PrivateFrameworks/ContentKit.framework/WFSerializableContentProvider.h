/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFSerializableContentProvider : NSObject {
    NSMutableDictionary * _entriesForClassNames;
}

@property (nonatomic, readonly) NSMutableDictionary *entriesForClassNames;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)entriesForClassNames;
- (id)entryConsideringSuperclassesForClass:(Class)arg1;
- (id)init;
- (id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2;
- (void)registerSerializableContentClasses;
- (id)serializedRepresentationForObject:(id)arg1;

@end
