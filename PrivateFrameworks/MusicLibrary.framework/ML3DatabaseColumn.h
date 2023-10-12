/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseColumn : NSObject {
    unsigned long long  _columnConstraints;
    unsigned long long  _datatype;
    id  _defaultValue;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long columnConstraints;
@property (nonatomic, readonly) unsigned long long datatype;
@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly) NSString *name;

+ (id)columnWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4;

- (void).cxx_destruct;
- (id)_columnDefinitionSQL;
- (unsigned long long)columnConstraints;
- (unsigned long long)datatype;
- (id)defaultValue;
- (id)description;
- (id)initWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4;
- (id)name;

@end
