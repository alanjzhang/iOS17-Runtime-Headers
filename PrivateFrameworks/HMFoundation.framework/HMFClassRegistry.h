/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFClassRegistry : HMFObject {
    NSMutableDictionary * _classes;
    Class  _defaultClass;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
}

@property (nonatomic, readonly) Class defaultClass;

- (void).cxx_destruct;
- (Class)classForKey:(id)arg1;
- (Class)defaultClass;
- (id)init;
- (id)initWithDefaultClass:(Class)arg1;
- (void)setClass:(Class)arg1 forKey:(id)arg2;

@end
