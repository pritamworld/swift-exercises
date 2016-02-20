// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIView;
@class UIPageControl;
@class UIViewController;
@protocol HYPPagesControllerDelegate;
@class NSCoder;

SWIFT_CLASS_NAMED("PagesController")
@interface HYPPagesController : UIPageViewController
@property (nonatomic) NSInteger startPage;
@property (nonatomic) BOOL setNavigationTitle;
@property (nonatomic) BOOL enableSwipe;
@property (nonatomic) BOOL showBottomLine;
@property (nonatomic) BOOL showPageControl;
@property (nonatomic, readonly) NSInteger pagesCount;
@property (nonatomic, readonly) NSInteger currentIndex;
@property (nonatomic, weak) id <HYPPagesControllerDelegate> __nullable pagesDelegate;
@property (nonatomic, readonly, strong) UIView * __nonnull bottomLineView;
@property (nonatomic, readonly, strong) UIPageControl * __nullable pageControl;
- (nonnull instancetype)init:(NSArray<UIViewController *> * __nonnull)pages transitionStyle:(UIPageViewControllerTransitionStyle)transitionStyle navigationOrientation:(UIPageViewControllerNavigationOrientation)navigationOrientation options:(NSDictionary<NSString *, id> * __nullable)options;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithTransitionStyle:(UIPageViewControllerTransitionStyle)style navigationOrientation:(UIPageViewControllerNavigationOrientation)navigationOrientation options:(NSDictionary<NSString *, id> * __nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStoryboard;

@interface HYPPagesController (SWIFT_EXTENSION(Pages))
- (nonnull instancetype)init:(NSArray<NSString *> * __nonnull)storyboardIds storyboard:(UIStoryboard * __nonnull)storyboard;
@end


@interface HYPPagesController (SWIFT_EXTENSION(Pages)) <UIPageViewControllerDelegate>
- (void)pageViewController:(UIPageViewController * __nonnull)pageViewController didFinishAnimating:(BOOL)finished previousViewControllers:(NSArray<UIViewController *> * __nonnull)previousViewControllers transitionCompleted:(BOOL)completed;
@end


@interface HYPPagesController (SWIFT_EXTENSION(Pages))
@end


@interface HYPPagesController (SWIFT_EXTENSION(Pages))
- (void)goTo:(NSInteger)index;
- (void)next;
- (void)previous;
- (void)add:(NSArray<UIViewController *> * __nonnull)viewControllers;
@end


@interface HYPPagesController (SWIFT_EXTENSION(Pages)) <UIPageViewControllerDataSource>
- (UIViewController * __nullable)pageViewController:(UIPageViewController * __nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * __nonnull)viewController;
- (UIViewController * __nullable)pageViewController:(UIPageViewController * __nonnull)pageViewController viewControllerAfterViewController:(UIViewController * __nonnull)viewController;
- (NSInteger)presentationCountForPageViewController:(UIPageViewController * __nonnull)pageViewController;
- (NSInteger)presentationIndexForPageViewController:(UIPageViewController * __nonnull)pageViewController;
@end


SWIFT_PROTOCOL_NAMED("PagesControllerDelegate")
@protocol HYPPagesControllerDelegate
- (void)pageViewController:(UIPageViewController * __nonnull)pageViewController setViewController:(UIViewController * __nonnull)viewController atPage:(NSInteger)page;
@end


@interface UIStoryboard (SWIFT_EXTENSION(Pages))
+ (UIStoryboard * __nonnull)Main;
@end

#pragma clang diagnostic pop