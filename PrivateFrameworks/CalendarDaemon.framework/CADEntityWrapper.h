/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    int  _databaseID;
    int  _entityType;
    NSArray * _loadedValues;
    CADObjectID * _objectID;
    int  _rowID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCalEntity:(void*)arg1 loadedValues:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)loadedValues;
- (id)objectID;

@end
